@class NSString, NSDictionary;

@interface IESLLFavoriteRawRequestConfig : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *extraID;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
