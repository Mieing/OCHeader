@class NSArray, NSString;

@interface ACCEditNoteStyleToolBarViewState : NSObject <ACCEditViewStateProtocol>

@property (copy, nonatomic) NSArray *itemViews;
@property (nonatomic) BOOL isShort;
@property (nonatomic) double alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
