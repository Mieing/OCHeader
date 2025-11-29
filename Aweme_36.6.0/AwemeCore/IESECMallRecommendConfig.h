@class NSString;

@interface IESECMallRecommendConfig : NSObject <IESECMallRecommendConfigProtocol>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *configJsonUrl;
@property (copy, nonatomic) NSString *pageCardUrl;
@property (nonatomic) long long straightOutLevel;
@property (copy, nonatomic) NSString *screenStraightId;
@property (nonatomic) BOOL openSaveStraightOutData;
@property (nonatomic) BOOL manualCreatePage;
@property (nonatomic) BOOL listViewAutoWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewPortOnWindow;
@property (nonatomic) BOOL enableSyncStraightOut;
@property (nonatomic) double createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
