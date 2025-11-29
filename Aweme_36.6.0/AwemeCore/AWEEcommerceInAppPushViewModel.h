@class NSArray, NSString, NSDictionary, AWEInnerPushControlModel, NSAttributedString, NSNumber;

@interface AWEEcommerceInAppPushViewModel : NSObject

@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) NSArray *extImage;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *fromUid;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *extraStr;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *pushType;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (nonatomic) BOOL isSBC;
@property (copy, nonatomic) NSDictionary *frontierPayLoad;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;

- (id)p_handleText:(id)a0 isTitle:(BOOL)a1;
- (id)handleContentWithTitleStr:(id)a0 extTitleStr:(id)a1;
- (id)p_keypointFontForContent;
- (id)p_keypointFontForTitle;
- (id)p_keypointFontAttributesForTitle:(BOOL)a0;
- (id)p_regularFontAttributesForTitle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
