@class NSString, NSArray;

@interface BDUGUploadTokenRequestParam : BDUGBaseRequestParam

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *senderTokenList;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) BOOL isResetToken;

- (void).cxx_destruct;

@end
