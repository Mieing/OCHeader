@class NSArray, NSString;

@interface IESIMExternalRefCoverURLModel : NSObject

@property (copy, nonatomic) NSArray *URLList;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long dataSize;

+ (id)modelCustomPropertyMapper;

- (id)initWithAWEURLModel:(id)a0;
- (id)getAWEURLModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
