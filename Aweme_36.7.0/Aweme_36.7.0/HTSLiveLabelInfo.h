@class HTSLiveSpliceLabel, NSString, HTSLiveProfilePicSpliceLabel, HTSLiveImage, NSMutableDictionary;

@interface HTSLiveLabelInfo : IESLivePBBaseMessage

@property (nonatomic) long long labelType;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) HTSLiveSpliceLabel *spliceLabel;
@property (nonatomic) BOOL hasSpliceLabel;
@property (retain, nonatomic) HTSLiveImage *wholeLabel;
@property (nonatomic) BOOL hasWholeLabel;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) HTSLiveProfilePicSpliceLabel *profilePicSpliceLabel;
@property (nonatomic) BOOL hasProfilePicSpliceLabel;
@property (retain, nonatomic) NSMutableDictionary *etExtra;
@property (readonly, nonatomic) unsigned long long etExtra_Count;

+ (id)descriptor;

- (id)extra;
- (id)profilePicSpliceLabel;
- (long long)displayType;
- (long long)labelType;
- (id)wholeLabel;
- (void)setDisplayType:(long long)a0;
- (id)spliceLabel;
- (void)setLabelType:(long long)a0;

@end
