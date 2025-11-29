@class NSArray, NSString;

@interface AWEVideoDraftExclusionModel : NSObject <NSCoding, NSCopying>

@property (nonatomic) BOOL isHideSearch;
@property (copy, nonatomic) NSArray *exclusionSecUidList;
@property (copy, nonatomic) NSString *exclusionListJson;
@property (nonatomic) BOOL isExclusionSelected;
@property (copy, nonatomic) NSArray *exclusionUserList;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
