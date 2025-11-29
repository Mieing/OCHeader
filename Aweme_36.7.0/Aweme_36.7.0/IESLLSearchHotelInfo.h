@class NSString, IESLLifeURLModel, NSArray;

@interface IESLLSearchHotelInfo : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *viewMoreUrl;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESLLifeURLModel *iconURL;
@property (copy, nonatomic) NSArray *roomList;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)roomListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
