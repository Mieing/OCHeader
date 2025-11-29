@class MMLiveCommentDataItem, NSString;

@interface MMFinderLiveFeedStreamCommentData : NSObject

@property (nonatomic) unsigned long long calculatedLen;
@property (retain, nonatomic) MMLiveCommentDataItem *data;
@property (nonatomic) unsigned int receiveSvrTime;
@property (readonly, nonatomic) NSString *identifier;

- (void)calculateLength;
- (void).cxx_destruct;

@end
