@class NSData, NSString, NSError;

@interface AWECustomCommandResult : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (nonatomic) long long operateTimestamp;

- (void).cxx_destruct;
- (id)init;

@end
