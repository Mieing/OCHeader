@class NSString, NSArray, NSDictionary, NSDate;

@interface IESGurdUpdateParams : NSObject {
    NSString *_identity;
}

@property (readonly, copy, nonatomic) NSString *identity;
@property (retain, nonatomic) NSDate *createTime;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channels;
@property (nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ callbackResult;
@property (nonatomic) BOOL enableDownloadRetry;
@property (copy, nonatomic) NSDictionary *customParams;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
