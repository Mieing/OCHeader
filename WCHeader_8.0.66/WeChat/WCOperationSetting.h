@class NSMutableDictionary;

@interface WCOperationSetting : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableDictionary *dicUserBigImageClickedCount;
@property (retain, nonatomic) NSMutableDictionary *dicUserBigImageAddedCount;
@property (nonatomic) BOOL needWriteBack;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addNewBigImageClickedCountForUser:(id)a0 clickedCount:(unsigned long long)a1;
- (void)addNewBigImageCountForUser:(id)a0 addedCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
