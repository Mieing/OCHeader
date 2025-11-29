@class NSString, NSArray, NSDictionary;

@interface IESECLiveGoodsModelUpdateRequestEvent : NSObject

@property (retain, nonatomic) NSString *apiPath;
@property (nonatomic) long long promotionID;
@property (retain, nonatomic) NSArray *updateIndexPaths;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
