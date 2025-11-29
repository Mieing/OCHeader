@class NSString, TextStateModel;

@interface TextStateDataSimpleProvider : NSObject <TextStateCardListDataProvider, MultipleTextStateCardViewDataSource>

@property (retain, nonatomic) TextStateModel *textState;
@property (nonatomic) BOOL visable;
@property (nonatomic) long long cardReportScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)count;
- (unsigned long long)beginIndex;
- (void)configureCardView:(id)a0 atIndex:(unsigned long long)a1;
- (void)configureSingleCardView:(id)a0 forMultipleCardView:(id)a1;
- (void).cxx_destruct;

@end
