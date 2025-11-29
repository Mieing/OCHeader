@class NSString, NSArray;

@interface ACCTextTypeFaceCategoryModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic) BOOL showDefault;
@property (copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (unsigned long long)selectedIndex;

@end
