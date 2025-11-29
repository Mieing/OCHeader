@class NSString;

@interface AWESchoolInfoEditModel : NSObject

@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *collegeName;
@property (copy, nonatomic) NSString *enrollYear;
@property (nonatomic) unsigned long long educationType;
@property (nonatomic) unsigned long long schoolVisibleType;
@property (retain, nonatomic) NSString *schoolVisible;
@property (nonatomic) BOOL hasChangedVisibleType;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
