@class NSString, NSArray, AWEURLModel;

@interface AWESearchHotelInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *viewMoreUrl;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSArray *roomList;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)roomListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
