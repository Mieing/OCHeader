@class NSArray, NSString;

@interface SectionItemData : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *iconArr;
@property (retain, nonatomic) NSArray *titleArr;
@property (retain, nonatomic) NSString *sectionTitle;

- (void).cxx_destruct;

@end
