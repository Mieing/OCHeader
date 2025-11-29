@class NSString, NSMutableData;

@interface AWESearchAdImageItem : NSObject

@property (nonatomic) BOOL isFinish;
@property (nonatomic) BOOL isError;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *mainFrameUrl;
@property (readonly, copy, nonatomic) NSString *keyMd5;

- (void).cxx_destruct;
- (id)description;
- (void)appendData:(id)a0;

@end
