@class NSString, AWETagLabelModel, NSArray, NSNumber, AWEURLModel;

@interface AWENearByOriginalAdModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) AWETagLabelModel *label;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL showLabel;
@property (copy, nonatomic) NSString *playerNum;
@property (retain, nonatomic) AWEURLModel *images;
@property (copy, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSArray *trackURLList;
@property (retain, nonatomic) NSArray *clickTrackURLList;

+ (id)labelJSONTransformer;
+ (id)imagesInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
