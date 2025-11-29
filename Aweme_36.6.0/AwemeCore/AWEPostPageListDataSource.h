@class NSArray;
@protocol IESServiceProvider, AWEPostPageListDataTemplate, AWEPostPageElementCenter;

@interface AWEPostPageListDataSource : NSObject

@property (weak, nonatomic) id<AWEPostPageElementCenter> center;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<AWEPostPageListDataTemplate> template;

- (id)_buildSection:(id)a0;
- (void)buildListData;
- (id)diff:(id)a0 new:(id)a1;
- (void).cxx_destruct;

@end
