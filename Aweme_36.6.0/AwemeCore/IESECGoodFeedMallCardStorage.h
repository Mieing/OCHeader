@class NSString;

@interface IESECGoodFeedMallCardStorage : NSObject

@property (class, retain, nonatomic) NSString *lastShowTime;
@property (class, retain, nonatomic) NSString *lastShowAwemeID;

- (id)getCurrentTimeStamp;
- (void)addRecordWithAwemeID:(id)a0;

@end
