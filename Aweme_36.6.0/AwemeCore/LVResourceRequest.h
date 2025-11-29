@class NSString;
@protocol LVResourceRequestDelegate;

@interface LVResourceRequest : NSObject

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) unsigned long long realType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ callback;
@property (weak, nonatomic) id<LVResourceRequestDelegate> delegate;
@property (copy, nonatomic) NSString *cachePath;

- (void).cxx_destruct;
- (id)identifier;

@end
