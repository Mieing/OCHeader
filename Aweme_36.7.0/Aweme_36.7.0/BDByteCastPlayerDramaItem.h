@class NSString, NSArray, BDByteCastPlayerDramaMediaAssetItem, NSDictionary, BDByteCastPlayerDramaUrlItem;

@interface BDByteCastPlayerDramaItem : NSObject

@property (copy, nonatomic) NSString *dramaId;
@property (retain, nonatomic) BDByteCastPlayerDramaUrlItem *dramaUrlItem;
@property (copy, nonatomic) NSArray *dramaUrlItemArray;
@property (nonatomic) long long headDuration;
@property (nonatomic) long long tailDuration;
@property (retain, nonatomic) BDByteCastPlayerDramaMediaAssetItem *dramaMediaAssetItem;
@property (nonatomic) BOOL shouldRemoveReal4K;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)wrapperSubtitle:(id)a0;
- (id)wrapperSkipInfo:(id)a0;
- (id)ppSubtitle:(id)a0;
- (id)ppSkipInfo:(id)a0;
- (id)initWithPrivateProtocolDramaBean:(id)a0;
- (id)toPrivateProtocolDramaBean;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
