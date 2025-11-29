@class NSString, NSURL, NSArray;

@interface OMJTemplateCategory : NSObject

@property (readonly, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) NSArray *templateInfos;

- (id)initWithBackingCategory:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
