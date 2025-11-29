@class NSString;

@interface ImageDescInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *endDesc;
@property (nonatomic) BOOL hasEndDesc;
@property (copy, nonatomic) NSString *minorDesc;
@property (nonatomic) BOOL hasMinorDesc;

+ (id)descriptor;

@end
