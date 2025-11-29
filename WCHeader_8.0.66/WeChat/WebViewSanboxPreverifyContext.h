@class NSString, NSArray;

@interface WebViewSanboxPreverifyContext : MMObject

@property (nonatomic) unsigned long long startConfigTimeStamp;
@property (nonatomic) BOOL bConfigRequestResult;
@property (copy, nonatomic) NSString *mainFrameSessionId;
@property (retain, nonatomic) NSArray *arrConfigTagNameList;
@property (nonatomic) BOOL bNotCheckIfUrlMatchToSessionUrl;

- (void).cxx_destruct;

@end
