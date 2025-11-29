@class NSString;

@interface AWEIMSearchHistoryStorageModel : NSObject <NSCoding>

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *itemID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
