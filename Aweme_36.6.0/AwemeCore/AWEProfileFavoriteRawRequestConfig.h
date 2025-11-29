@class NSString, NSDictionary, NSObject;

@interface AWEProfileFavoriteRawRequestConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *extraID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSObject *model;
@property (retain, nonatomic) Class modelClass;

- (void)configDefaultValue;
- (void).cxx_destruct;
- (id)init;

@end
