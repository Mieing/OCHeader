@class NSString, AWEIMCreateGroupConfiguration, AWEShareContext;

@interface AWEIMGroupCommandContext : NSObject

@property (nonatomic) long long platform;
@property (nonatomic) long long type;
@property (nonatomic) long long viewType;
@property (nonatomic) long long actions;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) id /* block */ show;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ confirm;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (copy, nonatomic) id /* block */ closeAction;
@property (retain, nonatomic) AWEIMCreateGroupConfiguration *createGroupConfiguration;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
