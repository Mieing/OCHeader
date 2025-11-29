@class NSString, AnchorIconInfoV2;

@interface AnchorTextInfoExtendV2 : GPBMessage

@property (copy, nonatomic) NSString *leftContent;
@property (nonatomic) BOOL hasLeftContent;
@property (retain, nonatomic) AnchorIconInfoV2 *iconExtend;
@property (nonatomic) BOOL hasIconExtend;
@property (copy, nonatomic) NSString *rightContent;
@property (nonatomic) BOOL hasRightContent;

+ (id)descriptor;

@end
