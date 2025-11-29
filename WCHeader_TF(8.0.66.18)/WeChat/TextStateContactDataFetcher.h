@class NSString, NSData, WCCgiBlockHelper;

@interface TextStateContactDataFetcher : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *context;
@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithUsername:(id)a0;
- (BOOL)isEqualToFetcher:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)startFetchWithCompletion:(id /* block */)a0;
- (void)privateRequest;
- (void).cxx_destruct;

@end
