@class NSString, AWEAwemeModel;

@interface AWEFantaUserActDataCollectorInfo : NSObject <FantaDataCollectorInfo>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long userActionMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
