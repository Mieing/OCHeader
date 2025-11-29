@class NSArray;

@interface IESECCommentSKUContentViewModel : IESECSKUContentViewModel {
    NSArray *_sectionObjectsArray;
}

- (id)sectionObjectsArray;
- (id)initWithSKUModel:(id)a0;
- (id)getSKUParams;
- (void)clearSKUParams;
- (id)getSKUParamsDictionary;
- (void).cxx_destruct;

@end
