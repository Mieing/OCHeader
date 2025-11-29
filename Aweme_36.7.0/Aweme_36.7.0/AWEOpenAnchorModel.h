@class NSNumber, NSString, NSArray;

@interface AWEOpenAnchorModel : NSObject

@property (copy, nonatomic) NSNumber *anchorType;
@property (copy, nonatomic) NSString *payloadJsonStr;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSArray *anchorIconList;

- (void).cxx_destruct;

@end
