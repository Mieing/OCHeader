@class NSString, NSNumber;

@interface AWEIMMixPhotoInitiatePageSheetItemViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSNumber *member;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *showAppTag;
@property (copy, nonatomic) NSString *redirectSchema;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *loraStyleID;

- (void)updateWithItemModel:(id)a0;
- (void)updateSelected:(BOOL)a0;
- (id)initWithItemModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
