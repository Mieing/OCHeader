@class NSString, NSData;

@interface AWEPaySKMVoiceBroadcastCache : NSObject <NSCopying>

@property (copy, nonatomic) NSString *amountStr;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastCache *prev;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastCache *next;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
