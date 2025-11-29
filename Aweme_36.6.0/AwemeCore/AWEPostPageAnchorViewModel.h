@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEPostPageAnchorViewModel : NSObject

@property (nonatomic) long long businessType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *anchorContent;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSString *iconImageName;
@property (nonatomic) unsigned long long missionType;
@property (retain, nonatomic) NSNumber *passiveAnchorNum;
@property (retain, nonatomic) NSNumber *passiveOptionsNum;
@property (retain, nonatomic) NSNumber *sourceNum;
@property (nonatomic) BOOL isSilentAdd;
@property (nonatomic) BOOL passiveAnchor;
@property (nonatomic) unsigned long long action;
@property (nonatomic) BOOL isCommerceIntention;
@property (copy, nonatomic) NSDictionary *anchorPublishParam;
@property (copy, nonatomic) NSDictionary *lifePublishFinishParams;
@property (copy, nonatomic) NSDictionary *anchorTrackParams;
@property (copy, nonatomic) NSString *graphicsAnchorType;

+ (id)anchorVMWithStudioAnchor:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
