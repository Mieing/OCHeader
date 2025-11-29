@class NSString;

@interface IESLiveNewFetchDressTask : NSObject

@property (copy, nonatomic) NSString *dressID;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)taskInfos;
- (void)unionTask:(id)a0;
- (void).cxx_destruct;

@end
