@class NSString, MMFinderLiveFeedStreamCommentData;

@interface MMFinderLiveFeedStreamCarouselHotCommentItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>

@property (retain, nonatomic) MMFinderLiveFeedStreamCommentData *comment;
@property (readonly, nonatomic) unsigned long long cellType;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
