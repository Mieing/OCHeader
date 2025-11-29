@class NSString, NSDictionary;

@interface AWEDislikeUserContext : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL sendsNotification;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;

@end
