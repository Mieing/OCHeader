@class NSString, NSDate;

@interface AWEPOICommentDraftCacheInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *commentID;
@property (retain, nonatomic) NSDate *saveDate;

- (long long)compareBySaveDate:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
