@class NSString, NSArray;

@interface AWETeenSettingSectionModel : NSObject

@property (copy, nonatomic) NSString *sectionHeaderTitle;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *sectionFooterTitle;
@property (nonatomic) BOOL hasClearOnce;

- (void).cxx_destruct;
- (id)init;

@end
