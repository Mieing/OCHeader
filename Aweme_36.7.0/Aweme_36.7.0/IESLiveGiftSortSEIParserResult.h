@class IESLiveInteractionCropData, NSArray, NSString, HTSInteractionStreamAppData, NSDictionary;

@interface IESLiveGiftSortSEIParserResult : NSObject <IESLiveSEIParserResult>

@property (copy, nonatomic) NSArray *giftIds;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long textClass;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
