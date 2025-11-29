@interface IESLiveConcertLinkmicJSBHandler : IESLiveConcertBaseJSBHandler

- (void)updateStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)getStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (id)bizId;

@end
