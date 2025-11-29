@class NSString, NSArray;

@interface IESLiveListSectionData : NSObject <IESLiveUpdatableListSection>

@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;

@end
