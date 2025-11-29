@class AWEPlayInteractionDescriptionExtraModel;

@interface AWEPlayInteractionTruncationTokenModel : NSObject

@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *dotsExtraModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *hashtagModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *editExtraModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *tailExtraModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *tailSpaceExtraModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *moreExtraModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionExtraModel *spaceExtraModel;
@property (nonatomic) BOOL forceShowTail;
@property (nonatomic) BOOL shouldForceFoldLine;
@property (nonatomic) long long truncationTokenType;
@property (nonatomic) long long truncationOrderType;
@property (nonatomic) long long priority;

- (id)getAttributedStringWithExtraModel:(id)a0;
- (void)setTruncationAttribute:(id)a0 attributedString:(id)a1;
- (void).cxx_destruct;
- (id)truncationToken;

@end
