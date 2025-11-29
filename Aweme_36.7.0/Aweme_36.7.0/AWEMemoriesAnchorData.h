@class NSString;

@interface AWEMemoriesAnchorData : NSObject

@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *iconURL;

- (void).cxx_destruct;

@end
