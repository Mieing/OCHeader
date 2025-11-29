@class NSString;

@interface TextStatePublishConfiguration : NSObject

@property (nonatomic) BOOL canEditBackground;
@property (nonatomic) BOOL canEditIcon;
@property (nonatomic) BOOL showToast;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL preserveLastPrivacyIfNeeded;
@property (nonatomic) BOOL checkExceed;

+ (id)defaultConfiguration;
+ (id)editConfiguration;
+ (id)followConfiguration;

- (void).cxx_destruct;

@end
