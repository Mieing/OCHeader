@class NSString, NSNumber, NSArray;

@interface AWELiveLocalLifeOriginalAdModel : AWEOriginalAdModel <IESLLLiveOriginalAdModelService>

@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webViewTitle;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) BOOL isLiveRoomData;
@property (nonatomic) long long preloadType;
@property (copy, nonatomic) NSArray *cardInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCardInfoWithAdStatus;

@end
