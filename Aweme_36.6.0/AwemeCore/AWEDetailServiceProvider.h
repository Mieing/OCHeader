@interface AWEDetailServiceProvider : IESServiceProvider

- (id)sectionControllerForObject:(id)a0;
- (void)trackStayTime;
- (void)startTimingForTrack;
- (id)separateLineSectionController;
- (id)newHeaderInfoSectionController;
- (id)headerInfoSectionController;
- (id)linkSectionController;
- (id)verifiedUserSectionController;
- (id)challangeEntranceSectionController;
- (id)taskLiteSectionController;
- (id)aiLoraProfileSectionController;

@end
