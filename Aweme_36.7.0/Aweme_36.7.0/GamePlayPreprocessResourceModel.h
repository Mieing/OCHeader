@class NSString, NSData, NSURL;

@interface GamePlayPreprocessResourceModel : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) NSData *resourceData;
@property (retain, nonatomic) NSURL *resourceUrl;
@property (copy, nonatomic) NSString *algorithm;
@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) NSString *algorithmParamJson;
@property (nonatomic) BOOL needServerExecute;

- (void).cxx_destruct;

@end
