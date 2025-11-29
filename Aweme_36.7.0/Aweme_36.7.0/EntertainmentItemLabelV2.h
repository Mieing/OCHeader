@class NSString, EntertainmentRightLabelV2;

@interface EntertainmentItemLabelV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *backgroudColor;
@property (nonatomic) BOOL hasBackgroudColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasTextColor;
@property (nonatomic) int position;
@property (nonatomic) BOOL hasPosition;
@property (retain, nonatomic) EntertainmentRightLabelV2 *rightLabel;
@property (nonatomic) BOOL hasRightLabel;
@property (copy, nonatomic) NSString *backGroundColor;
@property (nonatomic) BOOL hasBackGroundColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL hasBackgroundColor;

+ (id)descriptor;

@end
