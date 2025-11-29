@class NSMutableArray;

@interface IESLiveChannelMessageFakedFilter : HTSLiveMessageFakedFilter

@property (retain, nonatomic) NSMutableArray *fakeMessageDenyList;

- (void)cleanCaches;
- (void)addFilterMessage:(id)a0;
- (BOOL)doFilter:(id)a0;
- (void).cxx_destruct;

@end
