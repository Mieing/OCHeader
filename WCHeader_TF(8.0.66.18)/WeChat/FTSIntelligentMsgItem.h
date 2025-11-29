@class NSString;

@interface FTSIntelligentMsgItem : FTSMsgItem

@property (retain, nonatomic) NSString *ocrText;
@property (retain, nonatomic) NSString *faceAlbumLabels;
@property (retain, nonatomic) NSString *classificationLabels;

- (long long)compareMsgItemAscending:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
