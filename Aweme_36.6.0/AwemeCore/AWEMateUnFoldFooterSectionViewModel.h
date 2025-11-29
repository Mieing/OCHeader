@class NSString;

@interface AWEMateUnFoldFooterSectionViewModel : AWEBaseListSectionViewModel <NSObject>

@property (nonatomic) BOOL showUnfoldViewLoading;
@property (copy, nonatomic) id /* block */ unfoldListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unfoldList;
- (void).cxx_destruct;

@end
