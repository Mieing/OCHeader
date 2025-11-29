@class NSString, NSDictionary, NSURL, NSAttributedString, NSNumber;

@interface AWESocialPromotionPushViewModel : NSObject

@property (retain, nonatomic) NSURL *avatars;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *frontierPayLoad;
@property (copy, nonatomic) NSString *businessType;
@property (retain, nonatomic) NSURL *extImage;
@property (copy, nonatomic) NSAttributedString *extTitle;
@property (copy, nonatomic) NSAttributedString *extContent;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *extTag;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *fromUid;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;

- (id)p_keypointFontForContent;
- (id)p_keypointFontForTitle;
- (id)p_keypointFontAttributesForTitle:(BOOL)a0;
- (id)initWithPushNotice:(id)a0;
- (id)initWithGeneralRedButtonInnerPush:(id)a0;
- (id)p_configButtonTextWithModel:(id)a0;
- (id)p_configTitleTextWithModel:(id)a0;
- (id)p_configContentTextWithModel:(id)a0;
- (double)p_calculatesMaximumLength;
- (id)handleTitleWithTitleStr:(id)a0 extTitleStr:(id)a1 maximumWidth:(double)a2;
- (id)handleContentWithTitleStr:(id)a0 extTitleStr:(id)a1 maximumWidth:(double)a2;
- (id)p_regularFontAttributesForTitle;
- (void).cxx_destruct;

@end
