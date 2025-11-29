@class NSString, NSDictionary, ACCSocialStickeMentionBindingModel;

@interface ACCSocialStickerModel : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long stickerType;
@property (readonly, copy, nonatomic) NSString *effectIdentifier;
@property (copy, nonatomic) NSString *contentString;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;
@property (retain, nonatomic) ACCSocialStickeMentionBindingModel *mentionBindingModel;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL isAutoAdded;
@property (copy, nonatomic) NSString *tabName;

- (id)initWithStickerType:(unsigned long long)a0 effectIdentifier:(id)a1;
- (void)recoverDataFromDraftJsonString:(id)a0;
- (id)draftDataJsonString;
- (BOOL)hasVaildMentionBindingData;
- (void)mergeValuesFromStickerModel:(id)a0;
- (BOOL)hasVaildHashtagBindingData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNotEmpty;
- (id)trackInfo;

@end
