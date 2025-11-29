@class NSString;

@interface WAProfileRelatedInfo : MMObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *username;

- (id)initWithBrandInfo:(id)a0;
- (id)initWithWeAppInfo:(id)a0;
- (void).cxx_destruct;

@end
